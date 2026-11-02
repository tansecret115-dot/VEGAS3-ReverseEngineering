/* Module: aviplug.dll
   Function: FUN_5f9834f0
   Address: 5f9834f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9834f0(int *param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = 0;
  hMem = GlobalAlloc(0x40,0xc);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    piVar1 = FUN_5f984260(this,param_1);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)*piVar1)(piVar1,&DAT_5f9ec2a8,param_2);
      if (-1 < iVar2) {
        iVar3 = param_1[9] + 1;
        param_1[9] = iVar3;
        if (iVar3 <= param_1[6]) {
          iVar3 = param_1[6];
        }
        param_1[7] = iVar3;
      }
      (**(code **)(*piVar1 + 8))(piVar1);
      return iVar2;
    }
  }
  return -0x7ff8fff2;
}


