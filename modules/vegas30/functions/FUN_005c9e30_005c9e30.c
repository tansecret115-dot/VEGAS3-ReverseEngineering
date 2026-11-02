/* Module: vegas30.exe
   Function: FUN_005c9e30
   Address: 005c9e30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c9e30(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                undefined4 param_5,int param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = param_2;
  puVar1 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  FUN_005b83b0(param_2,1);
  iVar3 = param_3;
  iVar4 = FUN_005c9cc0(&param_1,puVar2,param_3,*(undefined4 *)(param_3 + 4),param_4,param_5,0,0,0);
  if (-1 < iVar4) {
    iVar5 = param_6;
    iVar6 = param_7;
    if ((param_7 < 1) && ((param_7 < 0 || (param_6 == 0)))) {
      iVar5 = DAT_00647e58;
      iVar6 = DAT_00647e5c;
    }
    param_1[8] = iVar5;
    param_1[9] = iVar6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_1;
    }
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x200000;
      *(uint *)*puVar2 = *(uint *)*puVar2 | 0x2000;
    }
    *(uint *)*puVar2 = *(uint *)*puVar2 | 0x100;
  }
  FUN_005b84d0(puVar2,1);
  return iVar4;
}


