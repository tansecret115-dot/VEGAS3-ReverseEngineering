/* Module: vegas30.exe
   Function: FUN_0044a060
   Address: 0044a060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044a060(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  int **ppiVar3;
  int *piVar4;
  int *local_110;
  undefined **local_10c;
  int *local_108;
  CHAR local_104 [260];
  
  GetWindowTextA(*(HWND *)(param_1 + 0x1a4),local_104,0x104);
  iVar1 = lstrlenA(local_104);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0xb4) + 0x14) != 0)) {
    _SfVideoPlugin_GetInterface_12
              (&DAT_006335c8,&local_110,*(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x10));
    if (local_110 != (int *)0x0) {
      local_10c = &PTR_LAB_006121a8;
      local_108 = local_110;
      piVar4 = local_110;
      (**(code **)(*local_110 + 4))(local_110);
      iVar1 = FUN_00449840(*(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x10),&local_110,&local_108);
      if (iVar1 == 0) {
        FUN_0044a160(param_1,0);
      }
      else if (iVar1 == -0x7ff8fffb) {
        ppiVar3 = &local_108;
        uVar2 = _SfGetString_8(DAT_00647204,0x82);
        SfMsgBox(DAT_00647624,0x30,uVar2,ppiVar3);
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      (**(code **)(*local_110 + 8))(local_110,unaff_ESI,piVar4,&PTR_LAB_006121a8);
    }
  }
  return;
}


