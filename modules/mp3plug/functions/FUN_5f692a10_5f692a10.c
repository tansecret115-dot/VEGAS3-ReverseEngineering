/* Module: mp3plug.dll
   Function: FUN_5f692a10
   Address: 5f692a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f692a10(int *param_1)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  undefined8 uVar3;
  int unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (-1 < iVar1) {
    hMem = GlobalAlloc(0x42,unaff_retaddr * 0x28);
    pvVar2 = GlobalLock(hMem);
    param_1[0x420] = (int)pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    FUN_5f692810((int)param_1);
    *(undefined4 *)param_1[0x420] = 1;
    *(undefined4 *)(param_1[0x420] + 4) = 0;
    uVar3 = ftol();
    *(undefined8 *)(param_1[0x420] + 8) = uVar3;
  }
  return iVar1;
}


