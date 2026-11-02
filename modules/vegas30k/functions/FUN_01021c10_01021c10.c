/* Module: vegas30k.dll
   Function: FUN_01021c10
   Address: 01021c10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01021c10(undefined4 param_1,int param_2)

{
  LPCSTR pCVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char local_30c;
  char local_30b;
  undefined1 local_30a [258];
  CHAR local_208 [520];
  
  pCVar1 = &local_30c;
  lstrcpyA(&local_30c,(LPCSTR)(param_2 + 1));
  do {
    if (local_30c == '\0') {
LAB_01021c55:
      if ((local_30b != ':') &&
         ((local_30b != '\\' || (iVar4 = FUN_01021d20(local_30a), iVar4 != 0)))) {
        return true;
      }
      DVar2 = GetFileAttributesA(&local_30c);
      if (DVar2 == 0xffffffff) {
        pcVar5 = &local_30c;
        pCVar1 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10a8);
        wsprintfA(local_208,pCVar1,pcVar5);
        uVar6 = 0x124;
        uVar3 = _SfGetString2_8(DAT_0120e5c8,0x10a1);
        iVar4 = _SfMessageBox_16(param_1,local_208,uVar3,uVar6);
        if (iVar4 == 6) {
          return true;
        }
      }
      return DVar2 != 0xffffffff;
    }
    if (local_30c == '*') {
      *pCVar1 = '\0';
      goto LAB_01021c55;
    }
    pCVar1 = CharNextA(pCVar1);
    local_30c = *pCVar1;
  } while( true );
}


