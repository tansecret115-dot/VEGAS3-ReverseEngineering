/* Module: erv23260.dll
   Function: FUN_63808c20
   Address: 63808c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63808c20(void *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  if (*(char *)((int)this + 0x740) != '\0') {
    if (*(int *)this == 0) {
      if (*(char *)(*(int *)((int)this + 0x5c0) + 0x840) == '\0') {
        *(undefined4 *)(*(int *)((int)this + 0x5c0) + 0x8a4) = 0;
        *param_1 = -(uint)(*(int *)this != 0) & 4;
        FUN_638025b0(*(void **)((int)this + 0x5c0),-1,&local_c,&local_8);
        if (local_8 < local_c) {
          return;
        }
        iVar2 = local_c * 0x77c;
        iVar1 = local_c;
        do {
          if (*(int *)(*(int *)((int)this + 0x5c0) + 0x140 + iVar2) != 4) {
            *(undefined1 *)(*(int *)((int)this + 0x5c0) + iVar2 + 0x7c4) = 1;
          }
          FUN_63809980(*(int *)(*(int *)((int)this + 0x5c0) + 0x654 + iVar2));
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0x77c;
        } while (iVar1 <= local_8);
        return;
      }
    }
    else {
      *param_1 = (-(uint)(*param_1 != 5) & 3) + 4;
    }
  }
  if ((*(char *)(*(int *)((int)this + 0x5c0) + 0x841) != '\0') && (*param_1 == 3)) {
    if (*(int *)this == 0) {
      *param_1 = 1;
    }
    else {
      *param_1 = 5;
      if ((*(int *)((int)this + 0xbc) == 4) ||
         (*(int *)(*(int *)((*(int *)((int)this + 0x3c) + 1) * 0x77c + *(int *)((int)this + 0x5c0))
                  + 0x14) != *(int *)(*(int *)(*(int *)((int)this + 0x5cc) + 0xc) + 0x14))) {
        *param_1 = 7;
      }
    }
  }
  if ((*(char *)((int)this + 0x742) != '\0') && ((*param_1 == 1 || (*param_1 == 5)))) {
    *param_1 = -(uint)(*(int *)this != 0) & 4;
  }
  return;
}


