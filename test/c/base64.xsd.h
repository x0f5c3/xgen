// Code generated by xgen. DO NOT EDIT.

// MyType1 ...
typedef char MyType1[];

// MyType2 ...
typedef struct {
	int LengthAttr; // attr, optional
} MyType2;

// MyType3 ...
typedef struct {
	int LengthAttr; // attr, optional
} MyType3;

// MyType4 ...
typedef struct {
	char Title;
	char Blob[];
	char Timestamp;
} MyType4;

// MyType5 ...
typedef char MyType5;

// MyType6 ...
typedef struct {
	char CodeAttr; // attr, optional
	int IdentifierAttr; // attr, optional
} MyType6;

// MyType7 ...
typedef struct {
	char OriginAttr; // attr
} MyType7;

// TopLevel ...
typedef struct {
	float CostAttr; // attr, optional
	char LastUpdatedAttr; // attr, optional
	MyType7 Nested;
	char MyType1[];
	MyType2 MyType2[];
} TopLevel;
