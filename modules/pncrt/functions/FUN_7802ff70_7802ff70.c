/* Module: pncrt.dll
   Function: FUN_7802ff70
   Address: 7802ff70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7802ff70(undefined4 *param_1,char *param_2,uint param_3,int param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int local_28;
  int local_24;
  char local_18 [24];
  
  FUN_7802fa20(*param_1,param_1[1],&local_28,local_18);
  iVar1 = local_24 + -1;
  pcVar3 = param_2 + (local_28 == 0x2d);
  FUN_78018100(pcVar3,param_3,(int)&local_28);
  local_24 = local_24 + -1;
  if ((-5 < local_24) && (local_24 < (int)param_3)) {
    if (iVar1 < local_24) {
      cVar2 = *pcVar3;
      while (cVar2 != '\0') {
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      pcVar3[-1] = '\0';
    }
    FUN_7802feb0(param_2,param_3,&local_28,'\x01');
    return;
  }
  FUN_7802fd40(param_2,param_3,param_4,&local_28,'\x01');
  return;
}


