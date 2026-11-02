/* Module: vegas30.exe
   Function: FUN_00449840
   Address: 00449840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00449840(LPCSTR param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  int *unaff_EBP;
  int *piVar5;
  int *local_318;
  uint local_314;
  int local_310;
  undefined1 uStack_211;
  WCHAR aWStack_210 [264];
  
  local_318 = (int *)0x0;
  local_314 = 0;
  local_310 = -1;
  iVar2 = _SfVideoPlugin_GetInterface_12(&DAT_0060f778,&local_318,param_1);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*local_318 + 0xc))(local_318,&local_314);
    piVar5 = (int *)0x0;
    piVar1 = local_318;
    if (0 < unaff_EBX) {
      do {
        (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,piVar5,aWStack_210,0x104);
        if (-1 < iVar2) {
          if ((&stack0x00000000 == (undefined1 *)0x210) || (aWStack_210[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_210,-1,(LPSTR)&local_314,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x314) {
            local_314 = local_314 & 0xffffff00;
          }
          uStack_211 = 0;
          iVar3 = lstrcmpA((LPCSTR)&local_314,param_1);
          piVar1 = piVar5;
          if (iVar3 == 0) break;
        }
        piVar5 = (int *)((int)piVar5 + 1);
        piVar1 = local_318;
      } while ((int)piVar5 < unaff_EBX);
    }
    local_318 = piVar1;
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    if (local_310 != -1) {
      return 0x80070005;
    }
  }
  uVar4 = _SfDSFilter_DeletePreset_12(param_2,param_3,1);
  DAT_0064767c = DAT_0064767c | 0x2000;
  return uVar4;
}


