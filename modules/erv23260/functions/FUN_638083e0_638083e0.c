/* Module: erv23260.dll
   Function: FUN_638083e0
   Address: 638083e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_638083e0(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  uVar3 = FUN_63809910((void *)param_1[0x175],&local_c,&local_8);
  cVar2 = (char)uVar3;
  while (cVar2 != '\0') {
    iVar4 = FUN_63809870((void *)param_1[0x174],local_c,local_8);
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar3 = FUN_63809910((void *)param_1[0x175],&local_c,&local_8);
    cVar2 = (char)uVar3;
  }
  local_10 = *param_1;
  iVar4 = param_1[0x170];
  if (local_10 <= *(int *)(iVar4 + 0x80) + -1) {
    iVar6 = local_10 * 0x77c;
    do {
      if ((*(int *)(iVar6 + 0x140 + iVar4) == 4) && (*(int *)(iVar6 + 0xc0 + iVar4) == *param_1)) {
        puVar1 = (undefined4 *)(iVar6 + 0x658 + iVar4);
        uVar3 = FUN_63809910((void *)*puVar1,&local_c,&local_8);
        if ((char)uVar3 != '\0') {
          do {
            iVar5 = FUN_63809870(*(void **)(iVar6 + 0x654 + iVar4),local_c,local_8);
            if (iVar5 != 0) {
              return iVar5;
            }
            uVar3 = FUN_63809910((void *)*puVar1,&local_c,&local_8);
          } while ((char)uVar3 != '\0');
        }
      }
      local_10 = local_10 + 1;
      iVar6 = iVar6 + 0x77c;
      iVar4 = param_1[0x170];
    } while (local_10 <= *(int *)(iVar4 + 0x80) + -1);
  }
  return 0;
}


