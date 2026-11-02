/* Module: vidcap30.exe
   Function: FUN_0044aaf0
   Address: 0044aaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044aaf0(undefined4 param_1,undefined4 param_2,LPSTR param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined1 local_858 [32];
  CHAR local_838 [1024];
  undefined1 local_438 [788];
  undefined1 local_124 [292];
  
  iVar1 = FUN_0044c6e0(param_2);
  local_838[0] = '\0';
  FUN_0044cb00(param_2,local_438);
  iVar2 = SfPrintF(local_838,&DAT_00586b68,local_438);
  iVar3 = FUN_0044cae0(param_2);
  if (iVar3 == 5) {
    iVar3 = SfPrintF(local_838 + iVar2,"\nTape$: %s\n",*(undefined4 *)(*(int *)(iVar1 + 4) + 0xc));
    FUN_0045aec0(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24),
                 *(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),local_858,0x1e);
    iVar4 = SfPrintF(local_838 + iVar2 + iVar3,"Timecode In$: %s\n",local_858);
    uVar7 = *(undefined4 *)(iVar1 + 0x44);
    puVar8 = local_858;
    iVar4 = iVar2 + iVar3 + iVar4;
    uVar6 = *(undefined4 *)(iVar1 + 0x40);
    uVar10 = 0x1e;
    uVar5 = FUN_004443a0(iVar1);
    FUN_0045aec0(uVar5,uVar6,uVar7,puVar8,uVar10);
    iVar2 = SfPrintF(local_838 + iVar4,"Length$: %s\n",local_858);
    if ((*(byte *)(iVar1 + 0x38) & 2) == 0) {
      FUN_0044e350(iVar1,local_858,0x1e);
      pcVar9 = "%s";
    }
    else {
      FUN_0045b3a0(local_124,local_858,0x1e);
      pcVar9 = "Captured on$: %s";
    }
    SfPrintF(local_838 + iVar4 + iVar2,pcVar9,local_858);
  }
  lstrcpynA(param_3,local_838,param_4);
  param_3[param_4 + -1] = '\0';
  return;
}


