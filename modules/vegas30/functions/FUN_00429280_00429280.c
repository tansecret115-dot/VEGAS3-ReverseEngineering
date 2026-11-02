/* Module: vegas30.exe
   Function: FUN_00429280
   Address: 00429280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429280(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_0064762c != 0) && (iVar2 = *(int *)(DAT_0064762c + 0x80), iVar2 != 0)) {
    FUN_00562990(&DAT_0064b538,1);
    FUN_00562a20(&DAT_0064b538);
    piVar1 = (int *)(iVar2 + 0x94);
    iVar2 = 2;
    do {
      if ((piVar1[1] != 0) && ((int *)*piVar1 != (int *)0x0)) {
        (**(code **)(*(int *)*piVar1 + 0x14))();
      }
      piVar1 = piVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00562990(&DAT_0064b538,0);
    FUN_00429480();
  }
  return;
}


