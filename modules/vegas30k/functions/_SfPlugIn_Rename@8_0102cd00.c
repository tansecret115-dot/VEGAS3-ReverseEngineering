/* Module: vegas30k.dll
   Function: _SfPlugIn_Rename@8
   Address: 0102cd00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfPlugIn_Rename_8(undefined4 param_1,BYTE *param_2)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_30;
  HKEY local_2c;
  CHAR local_28 [40];
  
                    /* 0x2cd00  1161  _SfPlugIn_Rename@8 */
  LVar1 = RegOpenKeyA((HKEY)&DAT_80000002,"Software\\Sonic Foundry\\Vegas\\3.0\\DXCache",&local_2c);
  if (LVar1 != 0) {
    return 0x80004005;
  }
  FUN_0102aeb0(param_1,local_28,0x28,1);
  LVar1 = RegCreateKeyA(local_2c,local_28,&local_30);
  if (LVar1 == 0) {
    iVar2 = lstrlenA((LPCSTR)param_2);
    LVar1 = RegSetValueExA(local_30,(LPCSTR)0x0,0,1,param_2,iVar2 + 1);
    RegCloseKey(local_30);
  }
  RegCloseKey(local_2c);
  return -(uint)(LVar1 != 0) & 0x80004005;
}


