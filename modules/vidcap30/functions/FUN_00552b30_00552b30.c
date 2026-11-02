/* Module: vidcap30.exe
   Function: FUN_00552b30
   Address: 00552b30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00552b30(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = param_1[1];
  if (0xffe4 < param_3) {
    FUN_00552c60(param_1,1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined4 *)0x0;
  puVar3 = *(undefined4 **)(iVar1 + 0x30 + param_2 * 4);
  do {
    if (puVar3 == (undefined4 *)0x0) {
LAB_00552bac:
      iVar5 = param_3 + 0xc;
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = *(uint *)(&DAT_0059f9b0 + param_2 * 4);
      }
      else {
        uVar4 = *(uint *)(&DAT_0059f9b8 + param_2 * 4);
      }
      if (0xfff0U - iVar5 < uVar4) {
        uVar4 = 0xfff0U - iVar5;
      }
      puVar3 = (undefined4 *)FUN_0055ec40(param_1,uVar4 + iVar5);
      while (puVar3 == (undefined4 *)0x0) {
        uVar4 = uVar4 >> 1;
        if (uVar4 < 0x32) {
          FUN_00552c60(param_1,2);
        }
        puVar3 = (undefined4 *)FUN_0055ec40(param_1,uVar4 + iVar5);
      }
      *(uint *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + uVar4 + iVar5;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = uVar4 + param_3;
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 **)(iVar1 + 0x30 + param_2 * 4) = puVar3;
      }
      else {
        *puVar2 = puVar3;
      }
LAB_00552c35:
      iVar1 = puVar3[1];
      puVar3[1] = iVar1 + param_3;
      puVar3[2] = puVar3[2] - param_3;
      return iVar1 + 0xc + (int)puVar3;
    }
    if (param_3 <= (uint)puVar3[2]) {
      if (puVar3 != (undefined4 *)0x0) goto LAB_00552c35;
      goto LAB_00552bac;
    }
    puVar2 = puVar3;
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}


