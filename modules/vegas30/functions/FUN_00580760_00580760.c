/* Module: vegas30.exe
   Function: FUN_00580760
   Address: 00580760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00580760(int *param_1)

{
  uchar uVar1;
  int iVar2;
  uchar *_Ptr;
  uchar *puVar3;
  
  FUN_00580a20();
  _Ptr = (uchar *)*param_1;
  puVar3 = (uchar *)0x0;
  uVar1 = *_Ptr;
  if (uVar1 != '\0') {
    do {
      iVar2 = _ismbcspace((int)(char)uVar1);
      if (iVar2 == 0) {
        puVar3 = (uchar *)0x0;
      }
      else if (puVar3 == (uchar *)0x0) {
        puVar3 = _Ptr;
      }
      _Ptr = _mbsinc(_Ptr);
      uVar1 = *_Ptr;
    } while (uVar1 != '\0');
    if (puVar3 != (uchar *)0x0) {
      *puVar3 = '\0';
      *(int *)(*param_1 + -8) = (int)puVar3 - *param_1;
    }
  }
  return;
}


