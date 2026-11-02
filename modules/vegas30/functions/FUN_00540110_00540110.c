/* Module: vegas30.exe
   Function: FUN_00540110
   Address: 00540110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00540110(int param_1,int param_2)

{
  uchar *_Source;
  int iVar1;
  int iVar2;
  uchar local_104 [260];
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = -0x7ff8fff2;
    iVar1 = FUN_005ec620();
    if (iVar1 != 0) {
      iVar2 = FUN_005ed410(*(undefined4 *)(param_1 + 0x30),0,0);
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        return iVar2;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_2 != 0) {
    _Source = (uchar *)(param_1 + 0x3c);
    iVar1 = _SfDosGetDateTime_4(_Source);
    if ((iVar1 != 0) && (iVar1 == *(int *)(param_1 + 0x2c))) {
      DeleteFileA((LPCSTR)_Source);
      _mbscpy(local_104,_Source);
      _mbscat(local_104,".sfk");
      DeleteFileA((LPCSTR)local_104);
    }
  }
  return iVar2;
}


