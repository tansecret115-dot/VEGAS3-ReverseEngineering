/* Module: vegas30k.dll
   Function: SfShowFioInstallWizard
   Address: 0101d580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfShowFioInstallWizard(struct HWND__ *,struct ISfFileIOManager *,unsigned
   long,int,enum _FioWizardContext_,int) */

long SfShowFioInstallWizard
               (HWND__ *param_1,ISfFileIOManager *param_2,ulong param_3,int param_4,
               _FioWizardContext_ param_5,int param_6)

{
  ulong uVar1;
  int iVar2;
  undefined4 unaff_ESI;
  int unaff_EDI;
  long lVar3;
  undefined4 *unaff_retaddr;
  undefined1 *puVar4;
  
                    /* 0x1d580  500
                       ?SfShowFioInstallWizard@@YGJPAUHWND__@@PAUISfFileIOManager@@KHW4_FioWizardContext_@@H@Z
                        */
  uVar1 = param_3;
  lVar3 = 1;
  if (param_2 == (ISfFileIOManager *)0x0) {
    return 1;
  }
  if (param_4 == 0) {
    iVar2 = (**(code **)(*(int *)param_2 + 0x34))(param_2,&param_3);
    if (iVar2 < 0) {
      return 1;
    }
    puVar4 = &stack0xfffffffc;
    iVar2 = (**(code **)*unaff_retaddr)(unaff_retaddr,&DAT_011da060,puVar4);
    (**(code **)(*(int *)uVar1 + 8))(uVar1);
  }
  else {
    iVar2 = (**(code **)(*(int *)param_2 + 0x30))(param_2,&param_3);
    if (iVar2 < 0) {
      return 1;
    }
    puVar4 = &stack0xfffffffc;
    iVar2 = (**(code **)*unaff_retaddr)(unaff_retaddr,&DAT_011da060,puVar4);
    (**(code **)(*(int *)uVar1 + 8))(uVar1);
  }
  if (iVar2 < 0) {
    return 1;
  }
  if (param_2 == (ISfFileIOManager *)0x0) {
    return 1;
  }
  if (unaff_EDI == 2) {
    iVar2 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    if (iVar2 == 0) {
      (**(code **)(*(int *)param_2 + 8))(param_2);
      return 1;
    }
  }
  else if (unaff_EDI == 4) {
    iVar2 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    if (iVar2 == 0) goto LAB_0101d6be;
    iVar2 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    if (iVar2 == 0) {
      (**(code **)(*(int *)param_2 + 8))(param_2);
      return 1;
    }
  }
  else if (unaff_EDI == 1) {
    iVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2);
    if (iVar2 == 0) {
      (**(code **)(*(int *)param_2 + 8))(param_2);
      return 1;
    }
  }
  else if ((unaff_EDI == 3) && (iVar2 = (**(code **)(*(int *)param_2 + 0xc))(param_2), iVar2 == 0))
  goto LAB_0101d6be;
  lVar3 = (**(code **)(*(int *)param_2 + 0x18))(param_2,puVar4,unaff_ESI);
LAB_0101d6be:
  (**(code **)(*(int *)param_2 + 8))(param_2);
  return lVar3;
}


