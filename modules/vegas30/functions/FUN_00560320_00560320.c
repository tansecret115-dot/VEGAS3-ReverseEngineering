/* Module: vegas30.exe
   Function: FUN_00560320
   Address: 00560320
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00560320(int param_1)

{
  int iVar1;
  HGLOBAL hMem;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uStack_248;
  int *piStack_244;
  int local_224 [128];
  undefined2 uStack_22;
  
  if (*(int **)(param_1 + 0x4d4) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x34))();
    if (-1 < iVar1) {
      uStack_248 = *(undefined4 *)(param_1 + 0x4d8);
      piStack_244 = (int *)0x0;
      iVar1 = (**(code **)(local_224[0] + 0x3c))();
      if (-1 < iVar1) {
        MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x39e),-1,(LPWSTR)&stack0xfffffdd8,0x104);
        uStack_22 = 0;
        piVar4 = piStack_244;
        (**(code **)(*piStack_244 + 0x1c))(piStack_244,&stack0xfffffdd8);
        hMem = GlobalAlloc(0x40,0x20);
        piVar2 = GlobalLock(hMem);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2[4] = 1;
          piVar2[1] = 1;
          piVar2[2] = (int)&uStack_248;
          piVar2[5] = 0;
          *piVar2 = (int)&PTR_LAB_0061b1c4;
        }
        piVar3 = piVar2;
        iVar1 = (**(code **)(local_224[0] + 0x44))(local_224);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        (**(code **)(*piVar4 + 0x10))(piVar4);
        (**(code **)(*piVar3 + 8))(piVar3);
      }
    }
    return iVar1;
  }
  return -0x7fff0001;
}


