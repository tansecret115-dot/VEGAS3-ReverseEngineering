/* Module: vegas30k.dll
   Function: FUN_01062c70
   Address: 01062c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_01062c70(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_retaddr;
  
  uVar1 = param_1[0x9b];
  *param_8 = 0;
  iVar2 = FUN_0105fae0();
  if ((-1 < iVar2) && (iVar2 = (**(code **)(*param_1 + 0x20))(param_1,0), -1 < iVar2)) {
    if ((param_1[0x9e] == -1) && (param_1[0x9f] == -1)) {
      return 1;
    }
    if (param_1[0xb] != 0) {
      FUN_01060a30();
    }
    if (param_1[0xa9] != 0) {
      iVar2 = FUN_010616f0(unaff_EBX,unaff_retaddr,param_2,param_2 >> 0x1f,param_3,param_4,param_5,
                           param_8,(-(uVar1 < 0x10) & 0x20U) + 0x11,param_1[0x9c],param_1[0x9d],
                           param_1[0xaa],param_1[0xa9]);
    }
    FUN_010609f0();
    FUN_01060b00(0);
  }
  return iVar2;
}


