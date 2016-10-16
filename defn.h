#define GENRE_LEN       25
#define	TITLE_LEN		100
#define	AUTHOR_LEN		50
#define	PUBLISHER_LEN	50
#define	NO_FORMATS		4
#define	FORMAT_LEN		10

struct Format{
    char format[ FORMAT_LEN ]; // Format, i.e., Paperback, Hardcover, Kindle, Audible
    float price; // Price in $ of the book in the given format
    int quantity; // Number of books in the inventory of the given format
};

struct BookInfo{
    char title[ TITLE_LEN ]; // Title of the book
    char author[ AUTHOR_LEN ]; // Name of the author
    char publisher[ PUBLISHER_LEN ]; // Publisher of the book
    struct Format formats[ NO_FORMATS ]; // Book formats carried
};

struct BST{ // A binary search tree
    struct BookInfo info; // Information about the book
    struct BST *left;  // Pointer to the left subtree
    struct BST *right;  // Pointer to the right subtree
};

struct Genre{
    char genre[ GENRE_LEN ]; // Type of genre
    struct BST *root;  // Pointer to root of search tree for this genre
};

struct HashTableEntry{
    char title[ TITLE_LEN ]; // Title of the book
    struct BST *book; // Pointer to node in tree containing the book's information
    struct HashTableEntry *next; // Pointer to the next node in the chain
};