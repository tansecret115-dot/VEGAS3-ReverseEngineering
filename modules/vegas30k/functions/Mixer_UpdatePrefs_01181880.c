/* Module: vegas30k.dll
   Function: Mixer_UpdatePrefs
   Address: 01181880
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_UpdatePrefs(long (__stdcall*)(struct ISFMixer *,unsigned long,unsigned
   long,void *),unsigned long) */

long Mixer_UpdatePrefs(_func_long_ISFMixer_ptr_ulong_ulong_void_ptr *param_1,ulong param_2)

{
  ushort uVar1;
  long lVar2;
  ulong unaff_EBP;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piStack_17c;
  int *piStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int *piStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int *piStack_160;
  undefined4 uStack_15c;
  undefined4 **ppuStack_158;
  int *piStack_154;
  undefined4 uStack_150;
  int *piStack_14c;
  int *piStack_148;
  undefined4 uStack_144;
  undefined4 **ppuStack_140;
  int *piStack_13c;
  undefined4 uStack_138;
  int *piStack_134;
  int *piStack_130;
  undefined4 uStack_12c;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int **ppiVar15;
  int *piVar16;
  undefined1 auStack_30 [48];
  
                    /* 0x181880  253  ?Mixer_UpdatePrefs@@YGJP6GJPAUISFMixer@@KKPAX@ZK@Z */
  if (param_1 == (_func_long_ISFMixer_ptr_ulong_ulong_void_ptr *)0x0) {
    return 1;
  }
  Transport_Suspend();
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x82,&DAT_012b09a8);
  puVar6 = auStack_30;
  piVar12 = DAT_012b09c8;
  (**(code **)(*DAT_012b09c8 + 0x84))();
  bVar3 = unaff_EBP != DAT_012b09a8;
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x70,&DAT_012b0940);
  piVar16 = (int *)0x70;
  ppiVar15 = (int **)DAT_012b09c8;
  (**(code **)(*DAT_012b09c8 + 0x84))();
  bVar4 = puVar6 != (undefined1 *)DAT_012b0940;
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x71,&DAT_012b0944);
  piVar14 = (int *)0x71;
  piVar13 = DAT_012b09c8;
  (**(code **)(*DAT_012b09c8 + 0x84))();
  bVar5 = piVar12 != DAT_012b0944;
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x83,&DAT_012b0948);
  piVar12 = (int *)&stack0xffffffb8;
  puVar11 = (undefined4 *)0x83;
  piVar10 = DAT_012b09c8;
  (**(code **)(*DAT_012b09c8 + 0x84))();
  bVar3 = piVar16 != DAT_012b0948 || (bVar5 || (bVar4 || bVar3));
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,6,&DAT_012b0950);
  piVar9 = (int *)&stack0xffffffb4;
  piVar8 = (int *)&DAT_00000006;
  piVar7 = DAT_012b09c8;
  (**(code **)(*DAT_012b09c8 + 0x84))();
  if ((ppiVar15 != DAT_012b0950) || (piVar16 != DAT_012b0954)) {
    bVar3 = true;
  }
  (**(code **)(*DAT_012b09c8 + 0x84))();
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,7,&DAT_012b09a0);
  if ((piVar13 != DAT_012b09a0) || (piVar14 != DAT_012b09a4)) {
    bVar3 = true;
  }
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,10,&DAT_012b0960);
  (**(code **)(*DAT_012b09c8 + 0x84))();
  if ((piVar10 != (int *)DAT_012b0960) || (puVar11 != DAT_012b0964)) {
    bVar3 = true;
  }
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0xb,&DAT_012b0968);
  (**(code **)(*DAT_012b09c8 + 0x84))();
  if ((piVar7 != DAT_012b0968) || (piVar8 != DAT_012b096c)) {
    bVar3 = true;
  }
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x72,&DAT_012b0970);
  puVar6 = &stack0xffffffa4;
  (**(code **)(*DAT_012b09c8 + 0x84))();
  if (piVar12 != DAT_012b0970) {
    bVar3 = true;
  }
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x74,&DAT_012b0974);
  (**(code **)(*DAT_012b09c8 + 0x84))();
  if (piVar9 != DAT_012b0974) {
    bVar3 = true;
  }
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x73,&DAT_012b0978);
  (**(code **)(*DAT_012b09c8 + 0x84))();
  if (puVar6 != (undefined1 *)DAT_012b0978) {
    bVar3 = true;
  }
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x60,&DAT_012b097c);
  (**(code **)(*DAT_012b09c8 + 0x88))();
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x61,&DAT_012b0980);
  (**(code **)(*DAT_012b09c8 + 0x88))();
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x40,&DAT_012b0984);
  (**(code **)(*DAT_012b09c8 + 0x88))();
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x84,&DAT_012b0988);
  (**(code **)(*DAT_012b09c8 + 0x88))();
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x90,&DAT_012b098c);
  (**(code **)(*DAT_012b09c8 + 0x88))();
  lVar2 = (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x91,&DAT_012b0990);
  (**(code **)(*DAT_012b09c8 + 0x88))();
  if ((bVar3) && (lVar2 = Mixer_Unprepare(), -1 < lVar2)) {
    (**(code **)(*DAT_012b09c8 + 0x88))();
    (**(code **)(*DAT_012b09c8 + 0x88))();
    uStack_12c = 6;
    piStack_130 = DAT_012b09c8;
    piStack_134 = (int *)0x1181cad;
    (**(code **)(*DAT_012b09c8 + 0x88))();
    piStack_134 = &DAT_012b0960;
    uStack_138 = 10;
    piStack_13c = DAT_012b09c8;
    ppuStack_140 = (undefined4 **)0x1181cc2;
    (**(code **)(*DAT_012b09c8 + 0x88))();
    ppuStack_140 = &DAT_012b0968;
    uStack_144 = 0xb;
    piStack_148 = DAT_012b09c8;
    piStack_14c = (int *)0x1181cd7;
    (**(code **)(*DAT_012b09c8 + 0x88))();
    piStack_14c = &DAT_012b0940;
    uStack_150 = 0x70;
    piStack_154 = DAT_012b09c8;
    ppuStack_158 = (undefined4 **)0x1181cec;
    (**(code **)(*DAT_012b09c8 + 0x88))();
    ppuStack_158 = &DAT_012b0944;
    uStack_15c = 0x71;
    piStack_160 = DAT_012b09c8;
    uStack_164 = (ulong *)0x1181d01;
    (**(code **)(*DAT_012b09c8 + 0x88))();
    uStack_164 = &DAT_012b09a8;
    iStack_168 = 0x82;
    piStack_16c = DAT_012b09c8;
    uStack_170 = (int **)0x1181d19;
    (**(code **)(*DAT_012b09c8 + 0x88))();
    uStack_170 = &DAT_012b0970;
    uStack_174 = 0x72;
    piStack_178 = DAT_012b09c8;
    piStack_17c = (int *)0x1181d2e;
    (**(code **)(*DAT_012b09c8 + 0x88))();
    piStack_17c = &DAT_012b0978;
    (**(code **)(*DAT_012b09c8 + 0x88))(DAT_012b09c8,0x73);
    (**(code **)(*DAT_012b09c8 + 0x88))(DAT_012b09c8,0x74,&DAT_012b0974);
    (**(code **)(*DAT_012b09c8 + 0x88))(DAT_012b09c8,0x12,&DAT_012b0aec);
    uStack_170 = (int **)CONCAT22(2,DAT_012b09b4);
    piStack_16c = (int *)DAT_012b0aec;
    uVar1 = (DAT_012b0af0 >> 3) << 1;
    uStack_164 = (ulong *)CONCAT22(DAT_012b0af0,uVar1);
    iStack_168 = (uint)uVar1 * DAT_012b0aec;
    piStack_160 = (int *)((uint)piStack_160 & 0xffff0000);
    (**(code **)(*DAT_012b09c8 + 0x70))(DAT_012b09c8,&uStack_170,0);
    (**(code **)(*DAT_012b09c8 + 0x70))(DAT_012b09c8,&piStack_17c,1);
    lVar2 = Mixer_Prepare();
  }
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x80,&DAT_012b09ac);
  (**(code **)(*DAT_012b09c8 + 0x88))();
  uStack_12c = 0x1181e21;
  (*param_1)((ISFMixer *)DAT_012b09c8,param_2,0x81,&DAT_012b09b0);
  (**(code **)(*DAT_012b09c8 + 0x88))();
  uStack_12c = 0x1181e40;
  Transport_Resume(0);
  return lVar2;
}


