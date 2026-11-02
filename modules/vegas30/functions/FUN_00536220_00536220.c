/* Module: vegas30.exe
   Function: FUN_00536220
   Address: 00536220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00536220(LPCSTR param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  LPSTR pCVar5;
  undefined8 uVar6;
  undefined4 local_4;
  
  puVar3 = param_2;
  pcVar2 = param_1;
  pCVar5 = (char *)0x0;
  local_4 = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)param_3 = 0xffffffff;
  *(undefined4 *)((int)param_3 + 4) = 0xffffffff;
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
LAB_0053627e:
      uVar4 = param_4;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        uVar6 = _SfTextToNanoTimeToken_16(pcVar2,param_4,0,&param_1);
        *puVar3 = uVar6;
        if (*param_1 != '\0') {
          local_4 = 0x80070057;
        }
      }
      if ((pCVar5 != (char *)0x0) && (*pCVar5 != '\0')) {
        uVar6 = _SfTextToNanoTimeToken_16(pCVar5,uVar4,0,&param_1);
        *param_3 = uVar6;
        if (*param_1 != '\0') {
          return 0x80070057;
        }
      }
      return local_4;
    }
    if (cVar1 == ';') {
      pCVar5 = CharNextA(param_1);
      *param_1 = '\0';
      param_1 = pCVar5;
      goto LAB_0053627e;
    }
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  } while( true );
}


