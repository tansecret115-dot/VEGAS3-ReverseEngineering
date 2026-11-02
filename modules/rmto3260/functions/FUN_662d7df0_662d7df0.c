/* Module: rmto3260.dll
   Function: FUN_662d7df0
   Address: 662d7df0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_662d7df0(undefined4 param_1,char *param_2,int param_3,byte *param_4,byte *param_5,
                 int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HKEY pHVar3;
  uint uVar4;
  int local_34 [3];
  int local_28 [3];
  char *local_1c [3];
  int local_10 [3];
  
  if (param_2 == (char *)0x0) {
    return 0x80004003;
  }
  FUN_662ef160(local_10,PTR_s_page_submit_6630ae14);
  uVar4 = 0x80004005;
  if (param_4 != (byte *)0x0) {
    puVar1 = FUN_662f5850(local_34,param_4);
    puVar2 = FUN_662ef160(local_28,PTR_s__property_page_url__6630ae38);
    puVar1 = FUN_662ef380(local_1c,puVar2,puVar1);
    FUN_662ef560(local_10,puVar1);
    FUN_662ef0f0((int *)local_1c);
    FUN_662ef0f0(local_28);
    FUN_662ef0f0(local_34);
  }
  if (param_5 != (byte *)0x0) {
    puVar1 = FUN_662f5850(local_1c,param_5);
    puVar2 = FUN_662ef160(local_28,PTR_s__property_meta_url__6630ae3c);
    puVar1 = FUN_662ef380(local_34,puVar2,puVar1);
    FUN_662ef560(local_10,puVar1);
    FUN_662ef0f0(local_34);
    FUN_662ef0f0(local_28);
    FUN_662ef0f0((int *)local_1c);
  }
  if (param_3 == 0) {
    FUN_662ef160(local_1c,param_2);
    uVar4 = FUN_662d7f50((int *)local_1c,local_10);
    FUN_662ef0f0((int *)local_1c);
  }
  if ((-1 < (int)uVar4) ||
     (((param_4 != (byte *)0x0 || (param_5 != (byte *)0x0)) && (param_6 == 0)))) {
    FUN_662ef430(local_1c,"http://janus.real.com/submit_sub.rxml?",local_10);
    pHVar3 = FUN_662f5c20(local_1c[0]);
    uVar4 = -(uint)(pHVar3 != (HKEY)0x1) & 0x80040264;
    FUN_662ef0f0((int *)local_1c);
  }
  FUN_662ef0f0(local_10);
  return uVar4;
}


