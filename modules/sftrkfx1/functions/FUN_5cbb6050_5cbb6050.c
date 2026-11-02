/* Module: sftrkfx1.dll
   Function: FUN_5cbb6050
   Address: 5cbb6050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb6050(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      FUN_5cbb60a0((int *)(*(int *)(param_1 + 0x1c) + iVar2),(byte *)(iVar3 + param_2),param_3,iVar1
                  );
      iVar1 = *(int *)(param_1 + 0x18);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1e8;
    } while (iVar3 < iVar1);
  }
  return;
}


