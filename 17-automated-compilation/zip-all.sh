#!/bin/bash

OUTPUT_DIR=automated-compilation

rm -rf $OUTPUT_DIR &> /dev/null
mkdir -p $OUTPUT_DIR
cp *.c *.h Makefile $OUTPUT_DIR
zip -r $OUTPUT_DIR.zip $OUTPUT_DIR
rm -r $OUTPUT_DIR
