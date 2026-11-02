/* Module: vegas30.exe
   Function: FUN_005a3680
   Address: 005a3680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a3680(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0064b138;
  iVar2 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_3 + 0x10) == 5) {
      iVar2 = FUN_005a2ed0(DAT_0064b138,param_1,*(undefined4 *)(param_2 + 8),param_4,param_5,param_6
                           ,param_3);
    }
    else if ((((*(int **)(param_2 + 0x140) == (int *)0x0) || (**(int **)(param_2 + 0x140) < 0x20))
             && (iVar2 = FUN_004e9f70(DAT_0064b138,0x229,0), -1 < iVar2)) &&
            (iVar2 = FUN_004ea750(puVar1,param_2,0x2a,0), -1 < iVar2)) {
      iVar2 = FUN_005a24e0(param_2 + 0x140,param_3,DAT_0064b50c,param_7,param_8);
      if (iVar2 == 0) {
        iVar2 = -0x7ff8fff2;
      }
      else {
        iVar2 = FUN_005a5060(iVar2,param_2,1,*(undefined4 *)(param_2 + 0x20),
                             *(undefined4 *)(param_2 + 0x24));
        FUN_004eb2b0(puVar1);
      }
      FUN_004ea040(puVar1,0);
      *(uint *)*puVar1 = *(uint *)*puVar1 | 0x100;
      DAT_0064767c = DAT_0064767c | 0x400;
      return iVar2;
    }
  }
  return iVar2;
}


