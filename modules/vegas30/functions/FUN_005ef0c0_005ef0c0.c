/* Module: vegas30.exe
   Function: FUN_005ef0c0
   Address: 005ef0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ef0c0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    Transport_Suspend();
  }
  FUN_005b83b0(param_1,1);
  FUN_005f6fd0();
  iVar1 = FUN_005f7720(param_3,0);
  if (-1 < iVar1) {
    FUN_005f1580();
    *(uint *)*param_1 = *(uint *)*param_1 | 0x800;
  }
  FUN_005c5fc0(param_1,*(undefined4 *)(param_2 + 8));
  DAT_0064767c = DAT_0064767c | 0x300;
  FUN_005b8da0(param_1,0,1);
  FUN_005b84d0(param_1,1);
  if (param_4 == 0) {
    Transport_Resume(0);
  }
  return iVar1;
}


