/* Module: aviplug.dll
   Function: FUN_5f94a1b0
   Address: 5f94a1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f94a1b0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            int *param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_retaddr;
  
  piVar2 = param_7;
  piVar1 = param_6;
  if (param_6 != (int *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  if (*(int *)(param_1 + 0x1c8) == 0) {
    return 0x8000ffff;
  }
  iVar3 = param_5 / (int)(uint)*(ushort *)(*(int *)(param_1 + 0x1c8) + 0xc);
  if (iVar3 <= param_3) {
    param_3 = iVar3;
  }
  uVar4 = (**(code **)(*(int *)(param_1 + 0x198) + 0x3c))
                    (param_1 + 0x198,param_2,param_2 >> 0x1f,param_4,param_3,&param_6);
  if (piVar2 != (int *)0x0) {
    *piVar2 = unaff_retaddr;
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c8) + 0xc) * unaff_retaddr;
  }
  return uVar4;
}


