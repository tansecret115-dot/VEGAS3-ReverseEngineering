/* Module: vegas30.exe
   Function: FUN_00422950
   Address: 00422950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422950(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *unaff_ESI;
  undefined *puVar7;
  ISFGraphBuilder *local_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  puVar2 = DAT_0064b138;
  local_c = (ISFGraphBuilder *)0x0;
  lVar3 = Mixer_CreateGraph(&local_c);
  if (-1 < lVar3) {
    local_4 = 0x20;
    (**(code **)(*(int *)local_c + 0x6c))(local_c,1,&local_4);
    lVar3 = Mixer_NumBusTypePorts(4);
    SfPrintF(&DAT_0064b9d4,"FX %d",lVar3 + 1);
    puVar7 = &DAT_0064b9d4;
    uVar4 = _SfGetString_8(DAT_00647204,0x50bf);
    SfPrintF(&DAT_0064b8d0,uVar4,puVar7);
    uVar4 = FUN_0052b4f0(DAT_00647624,&DAT_0064b8d0,0,unaff_ESI,1,1,&stack0xffffffec,0);
    iVar5 = (**(code **)(*unaff_ESI + 0x30))(unaff_ESI,FUN_0052b5b0,uVar4,0,0);
    FUN_0052b580(uVar4);
    iVar6 = FUN_00418e90(local_c);
    if (iVar6 == 0) {
      param_1 = 0;
    }
    else {
      iVar6 = FUN_005d31e0(puVar2,5,local_c,1);
      if (iVar6 != 0) goto LAB_00422a7e;
      FUN_005733d0();
      FUN_005749b0();
      puVar1 = (uint *)*puVar2;
      *puVar1 = *puVar1 | 0x8000;
    }
    iVar6 = FUN_005732a0(DAT_00647624,0);
    if ((-1 < iVar6) && (param_1 != 0)) {
      if (iVar5 == 0) {
        DAT_006491f4 = uStack_8;
      }
      FUN_00573550(lVar3);
    }
  }
LAB_00422a7e:
  if (local_c != (ISFGraphBuilder *)0x0) {
    (**(code **)(*(int *)local_c + 8))();
  }
  return;
}


