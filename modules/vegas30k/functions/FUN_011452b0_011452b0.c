/* Module: vegas30k.dll
   Function: FUN_011452b0
   Address: 011452b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011452b0(HWND param_1,int param_2,uchar *param_3)

{
  uchar *_Src;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  int *piVar5;
  size_t _Size;
  uchar *puVar6;
  int local_24 [7];
  int local_8;
  uchar *local_4;
  
  _Src = param_3;
  piVar5 = local_24;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_24[0] = 0x30;
  local_24[1] = param_2;
  SendMessageA(param_1,0x404,0,(LPARAM)local_24);
  _mbscpy(param_3,local_4);
  if (param_2 != 0) {
    iVar2 = lstrlenA((LPCSTR)param_3);
    _Size = iVar2 + 1;
    iVar2 = local_8 + -1;
    param_3 = (uchar *)_Size;
    do {
      param_2 = param_2 + -1;
      local_24[1] = param_2;
      SendMessageA(param_1,0x404,0,(LPARAM)local_24);
      if (local_8 == iVar2) {
        iVar2 = iVar2 + -1;
        uVar1 = lstrlenA((LPCSTR)local_4);
        memmove(_Src + uVar1 + 1,_Src,_Size);
        puVar4 = local_4;
        puVar6 = _Src;
        for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar4;
          puVar4 = puVar4 + 4;
          puVar6 = puVar6 + 4;
        }
        for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        _Size = (int)param_3 + 1U + uVar1;
        _Src[uVar1] = '\\';
        param_3 = (uchar *)_Size;
      }
    } while (-1 < iVar2);
  }
  return;
}


