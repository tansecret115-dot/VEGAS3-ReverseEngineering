/* Module: vidcap30.exe
   Function: FUN_0041faa0
   Address: 0041faa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041faa0(uint *param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  uchar *_Source;
  uint uVar2;
  uint uVar3;
  uchar local_200 [512];
  
  local_200[0] = '\0';
  if (param_1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_1;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      iVar1 = *(int *)(param_1[2] + uVar3 * 4);
      if (*(int *)(iVar1 + 8) == 0) {
        _mbscat(local_200,"\r");
      }
      _Source = (uchar *)_SfGetString_8(DAT_005ba2a0,*(undefined4 *)(iVar1 + 4));
      _mbscat(local_200,_Source);
      _mbscat(local_200,"\t");
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  lstrcpynA(param_2,(LPCSTR)local_200,param_3);
  param_2[param_3 + -1] = '\0';
  lstrlenA(param_2);
  return;
}


