suffixes = [
    "for men", "for women", "2024", "2025", "near me",
    "price", "review", "benefits", "side effects",
    "under 500", "under 1000", "best", "top", "cheap",
    "guide", "pdf", "images", "youtube", "how to use"
]

with open("seed.txt", "r", encoding="utf-8") as seed, open("data.txt", "a", encoding="utf-8") as out:
    for line in seed:
        base = line.strip()
        if not base:
            continue

        # Add the base query
        out.write(base.lower() + "\n")

        # Add expanded versions
        for s in suffixes:
            out.write((base + " " + s).lower() + "\n")
