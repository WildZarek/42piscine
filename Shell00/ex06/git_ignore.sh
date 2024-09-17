#!/bin/bash
git status --ignored -su | grep "!!" | cut -c 4-
