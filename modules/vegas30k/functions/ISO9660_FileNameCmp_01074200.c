/* Module: vegas30k.dll
   Function: ISO9660_FileNameCmp
   Address: 01074200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall ISO9660_FileNameCmp(char * const,unsigned char,char * const,unsigned char) */

int ISO9660_FileNameCmp(char *param_1,uchar param_2,char *param_3,uchar param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined3 in_stack_00000009;
  undefined3 in_stack_00000011;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  pcVar1 = param_1;
                    /* 0x74200  110  ?ISO9660_FileNameCmp@@YGHQADE0E@Z */
  ISO9660_GetNameParts(param_1,param_2,(uchar *)&local_10,(uchar *)&local_4,&param_2);
  pcVar2 = param_3;
  ISO9660_GetNameParts
            (param_3,(uchar)_param_4,(uchar *)&local_c,(uchar *)&local_8,(uchar *)&param_1);
  iVar3 = FUN_01074170(pcVar1,local_10 & 0xff,pcVar2,local_c & 0xff,0x1e);
  if (iVar3 == 0) {
    iVar3 = FUN_01074170(pcVar1 + (local_10 & 0xff) + 1,local_4 & 0xff,pcVar2 + (local_c & 0xff) + 1
                         ,local_8 & 0xff,0x1e);
  }
  return iVar3;
}


