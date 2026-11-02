/* Module: vegas30k.dll
   Function: _SfPlugIn_GetSfDllName@12
   Address: 0102c490
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfPlugIn_GetSfDllName_12(int *param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int *local_8;
  int local_4;
  
                    /* 0x2c490  1158  _SfPlugIn_GetSfDllName@12 */
  iVar1 = 0;
  local_4 = 0;
  local_8 = &DAT_01204e40;
  do {
    iVar2 = 0;
    if (0 < *local_8) {
      piVar3 = (int *)(local_8[1] + 8);
      do {
        iVar1 = 4;
        bVar6 = true;
        piVar4 = param_1;
        piVar5 = piVar3;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          lstrcpynA(param_2,(LPCSTR)(local_8[1] + 0x18 + iVar2 * 0x38),param_3);
          param_2[param_3 + -1] = '\0';
          local_4 = 1;
          iVar1 = 1;
          break;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0xe;
        iVar1 = local_4;
      } while (iVar2 < *local_8);
    }
    local_8 = local_8 + 4;
    if (iVar1 != 0) {
      return iVar1;
    }
  } while( true );
}


