/* Module: vidcap30.exe
   Function: _SfDllCreateInstance@20
   Address: 004bc0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDllCreateInstance_20(HMODULE param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  int *piVar3;
  int *piVar4;
  
                    /* 0xbc0e0  353  _SfDllCreateInstance@20 */
  iVar2 = -0x7fffbffb;
  pFVar1 = GetProcAddress(param_1,"DllGetClassObject");
  if (pFVar1 != (FARPROC)0x0) {
    piVar4 = (int *)&param_1;
    param_1 = (HMODULE)0x0;
    iVar2 = (*pFVar1)(param_2,&DAT_005a5b28);
    if (-1 < iVar2) {
      piVar3 = &param_1->unused;
      iVar2 = (**(code **)(*piVar4 + 0xc))(piVar4,unaff_retaddr,param_1,param_2);
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return iVar2;
}


