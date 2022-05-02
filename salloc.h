typedef struct {
  long allocs_count;
  long allocs_capacity;
  void** allocs;
} ascope_t;

ascope_t* salloc();
void* smalloc(ascope_t* scope, size_t size);
void* srealloc(ascope_t* scope, void* alloc, size_t size);
void sfree(ascope_t* scope);
