/* Module: vegas30k.dll
   Function: FUN_0118fa50
   Address: 0118fa50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118fa50(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  *param_2 = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    (**(code **)(*piVar1 + 4))(piVar1);
    (**(code **)(*(int *)*param_2 + 0x1c))((int *)*param_2,param_2 + 1,0x104);
  }
  param_2[0x4e] = *(int *)(param_1 + 0x10);
  param_2[0x42] = *(int *)(param_1 + 0x10);
  _SFSMPTE_NanoToSMPTE_12
            (*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),param_2 + 0x42);
  param_2[0x48] = *(int *)(param_1 + 0x10);
  _SFSMPTE_NanoToSMPTE_12
            (*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4),param_2 + 0x48);
  param_2[0x4f] = (*(int *)(param_1 + 0xc) << 0x12) >> 0x1f;
  param_2[0x60] = (*(int *)(param_1 + 0xc) << 0x11) >> 0x1f;
  param_2[0x50] = *(int *)(param_1 + 0x1170);
  param_2[0x51] = *(int *)(param_1 + 0x1174);
  param_2[0x52] = *(int *)(param_1 + 0x10);
  _SFSMPTE_NanoToSMPTE_12
            (*(undefined4 *)(param_1 + 0x1170),*(undefined4 *)(param_1 + 0x1174),param_2 + 0x52);
  param_2[0x58] = *(int *)(param_1 + 0x1178);
  param_2[0x59] = *(int *)(param_1 + 0x117c);
  param_2[0x5a] = *(int *)(param_1 + 0x10);
  _SFSMPTE_NanoToSMPTE_12
            (*(undefined4 *)(param_1 + 0x1178),*(undefined4 *)(param_1 + 0x117c),param_2 + 0x5a);
  param_2[99] = (*(int *)(param_1 + 0xc) << 0xe) >> 0x1f;
  param_2[0x61] = (*(int *)(param_1 + 0xc) << 0x10) >> 0x1f;
  param_2[0x62] = (*(int *)(param_1 + 0xc) << 0xf) >> 0x1f;
  param_2[100] = (*(int *)(param_1 + 0xc) << 0xd) >> 0x1f;
  param_2[0x65] = *(int *)(param_1 + 0xf0);
  param_2[0x66] = *(int *)(param_1 + 0x18);
  return 0;
}


