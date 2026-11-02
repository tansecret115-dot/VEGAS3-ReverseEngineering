/* Module: rmbe3260.dll
   Function: FUN_66019860
   Address: 66019860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66019860(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char *_Dest;
  size_t _Count;
  char *local_1c [3];
  int local_10 [3];
  
  piVar1 = (int *)FUN_66018a60();
  if (piVar1 == (int *)0x0) {
    return 0x8007000e;
  }
  FUN_6605b7e0(local_10,PTR_s_02VR0_6_01VR0_01VR0_01VR0_01VR0__6606cf18);
  FUN_66016940(local_1c,param_2,param_3);
  _Count = 5;
  _Dest = (char *)FUN_6605bc10(local_10,6);
  strncpy(_Dest,local_1c[0],_Count);
  FUN_6605bc90(local_10,-1);
  (**(code **)(piVar1[4] + 0xc))(piVar1 + 4,local_10[0]);
  FUN_66019650((void *)(param_1 + -0x10),piVar1);
  FUN_6605b770((int *)local_1c);
  FUN_6605b770(local_10);
  return 0;
}


