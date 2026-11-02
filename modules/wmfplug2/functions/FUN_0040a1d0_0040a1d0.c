/* Module: wmfplug2.dll
   Function: FUN_0040a1d0
   Address: 0040a1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a1d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_18;
  undefined1 local_c [4];
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x48) != 0) {
    if ((*(int *)(param_1 + 0x50) == 0) &&
       (piStack_18 = (int *)(param_1 + 0x50),
       iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x4c))
                         (*(undefined4 **)(param_1 + 0x4c),&DAT_0047bef0), iVar2 < 0)) {
      return;
    }
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      piStack_18 = local_8;
      (**(code **)(*piVar1 + 100))(piVar1,local_c);
      (**(code **)(**(int **)(param_1 + 0x48) + 0xc))(*(int **)(param_1 + 0x48),2,&piStack_18,4);
    }
  }
  return;
}


