/* Module: vegas30.exe
   Function: FUN_00569b60
   Address: 00569b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00569b60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = FUN_00569a00();
  if (-1 < iVar3) {
    uVar5 = 0;
    iVar1 = **(int **)(param_1 + 0x2b0);
    if (param_3 == 0) {
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          uVar4 = (uint)(iVar6 == param_2);
          if (iVar6 == iVar3) {
            uVar4 = uVar4 + 1;
          }
          if ((uVar4 != 0) && (uVar5 == 0)) {
            uVar5 = 1;
            uVar4 = uVar4 - 1;
          }
          iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar6 * 4);
          if (uVar5 != (*(uint *)(iVar2 + 0x1c) & 1)) {
            FUN_00569aa0(iVar2,uVar5,0);
          }
          if ((uVar4 != 0) && (uVar5 != 0)) {
            uVar5 = 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
    }
    else {
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          uVar4 = (uint)(iVar6 == param_2);
          if (iVar6 == iVar3) {
            uVar4 = uVar4 + 1;
          }
          if (uVar4 == 0) {
            if (uVar5 != 0) goto LAB_00569bc4;
          }
          else {
            if (uVar5 == 0) {
              uVar5 = 1;
              uVar4 = uVar4 - 1;
            }
LAB_00569bc4:
            iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar6 * 4);
            if ((*(byte *)(iVar2 + 0x1c) & 1) == 0) {
              FUN_00569aa0(iVar2,1,0);
            }
            if ((uVar4 != 0) && (uVar5 != 0)) {
              uVar5 = 0;
            }
          }
          iVar6 = iVar6 + 1;
          if (iVar1 <= iVar6) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}


