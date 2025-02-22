def obtenir_bibliotheque(langage, projet):
    bibliotheques_cpp = {
        "jeu": "SFML ou SDL2",
        "IA": "TensorFlow C++ ou OpenCV",
        "serveur": "Boost Asio",
        "calcul scientifique": "Eigen ou Armadillo"
    }

    bibliotheques_python = {
        "jeu": "Pygame",
        "IA": "TensorFlow ou scikit-learn",
        "serveur": "Flask ou Django",
        "calcul scientifique": "NumPy ou SciPy"
    }

    bibliotheques_js = {
        "jeu": "Three.js",
        "IA": "TensorFlow.js ou Brain.js",
        "serveur": "Node.js avec Express",
        "calcul scientifique": "math.js"
    }

    if langage.lower() == "c++":
        return bibliotheques_cpp.get(projet.lower(), "Aucune bibliothèque spécifique trouvée pour ce projet en C++.")
    elif langage.lower() == "python":
        return bibliotheques_python.get(projet.lower(), "Aucune bibliothèque spécifique trouvée pour ce projet en Python.")
    elif langage.lower() == "javascript":
        return bibliotheques_js.get(projet.lower(), "Aucune bibliothèque spécifique trouvée pour ce projet en JavaScript.")
    else:
        return "Langage non reconnu. Essayez C++, Python ou JavaScript."

# Test du code
langage = input("Entrez le langage (C++, Python, JavaScript) : ")
projet = input("Entrez le nom du projet (jeu, IA, serveur, calcul scientifique) : ")

print(obtenir_bibliotheque(langage, projet))
