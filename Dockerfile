FROM python:2.7.18 as builder

RUN apt-get update && \
    apt-get install -y arduino picocom && \
    pip install --upgrade pip && \
    pip install ino

WORKDIR /app

RUN ino init

FROM builder

COPY run.sh /app/run.sh
COPY src  /app/inos

ENTRYPOINT ["./run.sh"]
