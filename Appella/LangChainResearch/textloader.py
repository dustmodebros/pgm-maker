from langchain_community.document_loaders import TextLoader

file_path = "data/my_document.txt"  # Path of the document to be loaded
loader = TextLoader(file_path)      # Initialize the text loader
documents = loader.load()           # Load the text document
print(documents)