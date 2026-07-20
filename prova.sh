if [ "$(git rev-parse @)" = "$(git rev-parse @{u})" ]; then
    echo "up to date"
else
    echo "changes available"
fi
