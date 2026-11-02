/* Module: Setup.exe
   Function: FUN_00411440
   Address: 00411440
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00411440(void *this,LPCSTR param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_2;
  for (iVar1 = 0xd8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  *(CHAR *)(param_2 + 0x15) = '\0';
  *(undefined1 *)(param_2 + 0x56) = 0;
  *(undefined1 *)(param_2 + 0x97) = 0;
  iVar1 = FUN_00411200(this,param_2);
  if (iVar1 == 0) {
    while( true ) {
      iVar1 = lstrcmpiA((LPCSTR)(param_2 + 0x15),param_1);
      if (iVar1 == 0) break;
      piVar2 = param_2;
      for (iVar1 = 0xd8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar2 = 0;
        piVar2 = piVar2 + 1;
      }
      iVar1 = FUN_004112c0(this,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


