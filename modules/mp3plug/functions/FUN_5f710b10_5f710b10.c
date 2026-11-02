/* Module: mp3plug.dll
   Function: FUN_5f710b10
   Address: 5f710b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f710b10(void)

{
  LPCVOID in_EAX;
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_5f710990();
  if ((char)uVar1 == '\0') {
    return 0;
  }
  uVar1 = FUN_5f710990();
  if ((char)uVar1 == '\0') {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)((int)in_EAX + 4);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x2c))(1);
  }
  FUN_5f681ba0(in_EAX);
  return 1;
}


