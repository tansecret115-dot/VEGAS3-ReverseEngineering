/* Module: 50comupd.exe
   Function: FUN_01004375
   Address: 01004375
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD __cdecl FUN_01004375(int param_1,DWORD param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = param_1 * 0x18;
  if (*(int *)(&DAT_0100b844 + iVar1) != 1) {
    if (param_3 == 0) {
      DVar2 = 0;
    }
    else if (param_3 == 1) {
      DVar2 = 1;
    }
    else {
      DVar2 = param_2;
      if (param_3 == 2) {
        DVar2 = 2;
      }
    }
    DVar2 = SetFilePointer(*(HANDLE *)(&DAT_0100b854 + iVar1),param_2,(PLONG)0x0,DVar2);
    if (DVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    return DVar2;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(DWORD *)(&DAT_0100b84c + iVar1) = *(int *)(&DAT_0100b84c + iVar1) + param_2;
      goto LAB_010043b7;
    }
    if (param_3 != 2) {
      return 0xffffffff;
    }
    param_2 = *(int *)(&DAT_0100b850 + iVar1) + param_2;
  }
  *(DWORD *)(&DAT_0100b84c + iVar1) = param_2;
LAB_010043b7:
  return *(DWORD *)(&DAT_0100b84c + iVar1);
}


