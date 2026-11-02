/* Module: vegas30.exe
   Function: FUN_005f4ff0
   Address: 005f4ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f4ff0(int *param_1,LPCSTR param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  HRESULT HVar2;
  int iVar3;
  HANDLE pvVar4;
  int *unaff_EBP;
  undefined4 uVar5;
  int *unaff_ESI;
  int *unaff_EDI;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 local_190;
  int local_18c [5];
  CLSID local_178;
  WCHAR local_168 [39];
  undefined2 local_11a;
  undefined1 local_118 [272];
  undefined4 local_8;
  
  param_1[0x16] = param_3;
  MultiByteToWideChar(0,1,param_2,-1,local_168,0x28);
  local_11a = 0;
  HVar2 = CLSIDFromString(local_168,&local_178);
  iVar3 = FUN_005f06b0(param_4,local_118);
  uVar5 = 0xffffffff;
  if (-1 < iVar3) {
    uVar5 = local_8;
  }
  if (HVar2 == -0x7ffbfe0d) {
    HVar2 = FUN_00508a60(param_2,&local_178);
  }
  if (HVar2 < 0) {
    iVar3 = -0x7ff8ffa9;
  }
  else {
    piVar1 = param_1 + 0x14;
    iVar3 = _SfVideoPlugin_CreateCacheList_4(piVar1);
    if ((-1 < iVar3) && (*piVar1 != 0)) {
      local_190 = 0;
      iVar3 = FUN_005f51d0(&local_178,&local_190,uVar5);
      if (-1 < iVar3) {
        piVar9 = local_18c;
        puVar8 = &DAT_00610db0;
        piVar6 = param_1;
        iVar3 = (**(code **)*param_1)(param_1,&DAT_00610db0);
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*unaff_EBP + 0x28))(unaff_EBP,&stack0xfffffe6c);
          if (-1 < iVar3) {
            iVar3 = (**(code **)(*unaff_ESI + 0x38))(unaff_ESI,&stack0xfffffe6c);
            if (-1 < iVar3) {
              FUN_005a5060(piVar6,puVar8,5,unaff_ESI,unaff_EBP);
              piVar7 = piVar6;
              iVar3 = _SfList_InsertList_16(*piVar1,0xffffffff,&stack0xfffffe60,1);
              unaff_EDI = piVar6;
              if (-1 < iVar3) {
                if ((*(byte *)(piVar7 + 0x1e) & 2) != 0) {
                  param_1[0xe] = 2;
                  param_1[0xf] = 0;
                  param_1[0x10] = 0;
                  param_1[0x11] = 0;
                  param_1[0x12] = 0;
                  param_1[0x13] = 0;
                }
                FUN_005f41e0();
                if ((HANDLE)param_1[0x22] != (HANDLE)0x0) {
                  CloseHandle((HANDLE)param_1[0x22]);
                }
                pvVar4 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
                param_1[0x22] = (int)pvVar4;
              }
            }
            (**(code **)(*piVar9 + 8))(piVar9);
          }
          (**(code **)(*unaff_EDI + 8))(unaff_EDI);
          return iVar3;
        }
      }
    }
  }
  return iVar3;
}


