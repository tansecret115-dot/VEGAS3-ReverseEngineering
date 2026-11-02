/* Module: erv23260.dll
   Function: FUN_63808ae0
   Address: 63808ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63808ae0(void *this,int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *local_8;
  
  local_8 = this;
  if (*(char *)((int)this + 0x741) == '\0') {
    if ((*(char *)(*(int *)((int)this + 0x5c0) + 0x841) != '\0') && (*param_1 == 3)) {
      *param_1 = 1;
    }
    if ((*(char *)((int)this + 0x742) != '\0') && (*param_1 == 1)) {
      *param_1 = 0;
      return;
    }
    if ((*(char *)((int)this + 0x740) != '\0') &&
       (*param_1 = 0, *(char *)(*(int *)((int)this + 0x5c0) + 0x840) == '\0')) {
      FUN_63809980(*(int *)((int)this + 0x5d0));
      *(undefined4 *)(*(int *)((int)this + 0x5c0) + 0x8a4) = 0;
    }
  }
  else {
    *param_1 = 1;
    *(undefined4 *)(*(int *)((int)this + 0x5c0) + 0x8a4) = 0;
    if ((*(char *)((int)this + 0x740) != '\0') && (*param_1 = 0, *(int *)((int)this + 0xbc) == 5)) {
      uVar2 = FUN_63809910(*(void **)((int)this + 0x5d0),(int *)&local_8,&param_1);
      cVar1 = (char)uVar2;
      while (cVar1 != '\0') {
        uVar2 = FUN_63809910(*(void **)((int)this + 0x5d0),(int *)&local_8,&param_1);
        cVar1 = (char)uVar2;
      }
      uVar2 = FUN_63809910(*(void **)((int)this + 0x5d4),(int *)&local_8,&param_1);
      if ((char)uVar2 != '\0') {
        do {
          uVar2 = FUN_63809910(*(void **)((int)this + 0x5d4),(int *)&local_8,&param_1);
        } while ((char)uVar2 != '\0');
        return;
      }
    }
  }
  return;
}


