/* Module: sfcdi.dll
   Function: FUN_5bf15ee0
   Address: 5bf15ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5bf15ee0(HSFCD__ *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  _toc *p_Var1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar4 = 0x8004e055;
  if ((param_1 != (HSFCD__ *)0x0) && (param_2 < *(uint *)param_1)) {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + param_2 * 4);
    if (iVar2 != 0) {
      param_6[3] = *(undefined4 *)(iVar2 + 4);
      param_6[2] = *(undefined4 *)(iVar2 + 8);
      p_Var1 = FUN_5bf15e30(param_1,param_2,0x20);
      if (p_Var1 != (_toc *)0x0) {
        iVar2 = FUN_5bf2bbb0((int)p_Var1,param_3);
        if ((iVar2 != 0) && ((*(byte *)(iVar2 + 8) & 4) == 0)) {
          param_6[4] = *(undefined4 *)(iVar2 + 0x14);
          param_6[5] = *(undefined4 *)(iVar2 + 0x18);
          param_6[7] = param_3;
          uVar3 = sfcddb_DiscID(p_Var1);
          param_6[6] = uVar3;
          uVar4 = 0;
        }
      }
      FUN_5bf15ea0(p_Var1);
    }
    param_6[1] = param_4;
    *param_6 = param_5;
    return uVar4;
  }
  return 0x8004e055;
}


