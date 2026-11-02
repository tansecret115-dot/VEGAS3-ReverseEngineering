/* Module: vegas30k.dll
   Function: _SfCoCreateInstanceFromObjectMap@24
   Address: 01023dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfCoCreateInstanceFromObjectMap_24
              (int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
              int *param_6)

{
  int *piVar1;
  FARPROC pFVar2;
  int iVar3;
  int iVar4;
  int *unaff_EBX;
  int iVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
                    /* 0x23dd0  785  _SfCoCreateInstanceFromObjectMap@24 */
  if ((param_6 == (int *)0x0) && (param_6 = DAT_012099dc, DAT_012099dc == (int *)0x0)) {
    iVar5 = 0;
    piVar1 = DAT_012099dc;
  }
  else {
    iVar5 = *param_6;
    piVar1 = param_6;
  }
  iVar4 = 0;
  if (0 < iVar5) {
    param_6 = (int *)piVar1[1];
    piVar1 = (int *)piVar1[2];
    do {
      iVar3 = 4;
      bVar8 = true;
      piVar6 = param_1;
      piVar7 = piVar1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *piVar6 == *piVar7;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        if (piVar1 == (int *)0x0) {
          return 1;
        }
        if ((HMODULE)piVar1[0x49] == (HMODULE)0x0) {
          return 1;
        }
        pFVar2 = GetProcAddress((HMODULE)piVar1[0x49],"DllGetClassObject");
        if (pFVar2 == (FARPROC)0x0) {
          return 1;
        }
        iVar5 = (*pFVar2)(param_1,&DAT_011f0e50,&param_6);
        if (iVar5 < 0) {
          return iVar5;
        }
        iVar5 = (**(code **)(*param_3 + 0xc))(param_3,unaff_EBX,param_1,param_2);
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
        return iVar5;
      }
      iVar4 = iVar4 + 1;
      piVar1 = (int *)((int)piVar1 + (int)param_6);
    } while (iVar4 < iVar5);
  }
  return 1;
}


