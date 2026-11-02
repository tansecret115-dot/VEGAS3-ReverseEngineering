/* Module: stl2plg.dll
   Function: FUN_00403e30
   Address: 00403e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403e30(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = param_2;
  iVar5 = 0;
  iVar3 = 0;
  if (0 < (int)param_2) {
    do {
      bVar1 = *(byte *)(iVar3 + param_1);
      iVar4 = iVar3 + 1;
      param_2 = (uint)bVar1;
      if (bVar1 < 0x80) {
        iVar3 = param_2 + 1;
        do {
          *(undefined1 *)(iVar5 + param_3) = *(undefined1 *)(iVar4 + param_1);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      else if (0x80 < bVar1) {
        param_2 = (uint)(byte)-bVar1;
        iVar6 = param_2 + 1;
        do {
          *(undefined1 *)(iVar5 + param_3) = *(undefined1 *)(iVar4 + param_1);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar4 = iVar3 + 2;
      }
      iVar3 = iVar4;
    } while (iVar4 < (int)uVar2);
  }
  return;
}


