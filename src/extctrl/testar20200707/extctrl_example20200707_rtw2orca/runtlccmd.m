function runtlccmd
% RUNTLCCMD - run tlc command (regenerate C code from .rtw file) for model extctrl_example20200707
% This function will run the tlc command stored in the variable 
% "tlccmd" in tlccmd.mat, whose contents is as follows:
% 
% 	tlc
% 	-r
% 	/home/.disk/merged/sperry-02.control.lth.se/primary/h/home/julian/extctrl/testar20200707/extctrl_example20200707_rtw2orca/extctrl_example20200707.rtw
% 	/opt/robot/matlab/rtw2orca.tlc
% 	-O/home/.disk/merged/sperry-02.control.lth.se/primary/h/home/julian/extctrl/testar20200707/extctrl_example20200707_rtw2orca
% 	-I/opt/robot/matlab
% 	-I/home/.disk/merged/sperry-02.control.lth.se/primary/h/home/julian/extctrl/testar20200707/extctrl_example20200707_rtw2orca/tlc
% 	-I/opt/matlab/matlab-R2012a/rtw/c/tlc/mw
% 	-I/opt/matlab/matlab-R2012a/rtw/c/tlc/lib
% 	-I/opt/matlab/matlab-R2012a/rtw/c/tlc/blocks
% 	-I/opt/matlab/matlab-R2012a/rtw/c/tlc/fixpt
% 	-I/opt/matlab/matlab-R2012a/stateflow/c/tlc
% 	-aFoldNonRolledExpr=1
% 	-aInlineInvariantSignals=0
% 	-aInlineParameters=1
% 	-aLocalBlockOutputs=1
% 	-aRollThreshold=8
% 	-aForceBlockIOInitOptimize=0
% 	-aGenerateReport=0
% 	-aGenCodeOnly=0
% 	-aRTWVerbose=1
% 	-aIncludeHyperlinkInReport=0
% 	-aLaunchReport=0
% 	-aGenerateTraceInfo=0
% 	-aForceParamTrailComments=1
% 	-aGenerateComments=1
% 	-aIgnoreCustomStorageClasses=1
% 	-aIncHierarchyInIds=0
% 	-aMaxRTWIdLen=128
% 	-aShowEliminatedStatements=1
% 	-aIncDataTypeInIds=0
% 	-aInsertBlockDesc=0
% 	-aIgnoreTestpoints=0
% 	-aSimulinkBlockComments=1
% 	-aInlinedPrmAccess="Literals"
% 	-aTargetFcnLib="ansi_tfl_tmw.mat"
% 	-aIsPILTarget=0
% 	-aLogVarNameModifier="rt_"
% 	-aGenerateFullHeader=1
% 	-aCROSS_COMPILE=""
% 	-aRTW2ORCA_LOCAL="ext2irb irb2ext"
% 	-aRTW2ORCA_LABCOMM="extctrl_irc5_main_20120112"
% 	-aRTW2ORCA_EXTERNAL_SRCS="rtw2orca_irc5_main_20120112_xeno labcomm_lth_net_xeno"
% 	-aRTW2ORCA_VPATH=".. /opt/robot/labcomm /opt/robot/orca /opt/robot/extctrl"
% 	-aRTW2ORCA_LIB="-lrtdm -lnative -lxenomai"
% 	-aRTW2ORCA_INCLUDE="/opt/robot/include/lth/lth_net /opt/robot/extctrl /usr/xenomai/include"
% 	-aRTW2ORCA_LIBRARY=""
% 	-aRTW2ORCA_CFLAGS="-DROBOT_COUNT=1 -DROBOT_0_JOINT_COUNT=6 -DFORCE_SENSOR_COUNT=0"
% 	-aRTW2ORCA_POSTCOMMAND="mkdir -p /tmp/\$(USER)/rtw2orca ; cp \$(MODEL) /tmp/\$(USER)/rtw2orca"
% 	-aGenerateTraceInfo=0
% 	-aIgnoreTestpoints=0
% 	-aProtectedModelReferenceTarget=0
% 	-p10000

   disp('This function will be obsoleted in a future release.') 
   mdl = 'extctrl_example20200707';

   sysopen = ~isempty(strmatch(mdl, find_system('type', 'block_diagram'), 'exact'));

   if ~sysopen

      disp([mfilename ': Error: model ' mdl ' is not open. Please open model ' mdl ' and then run ' mfilename ' again.']);

   else

      rtwprivate('rtwattic', 'setBuildDir', '/home/.disk/merged/sperry-02.control.lth.se/primary/h/home/julian/extctrl/testar20200707/extctrl_example20200707_rtw2orca');
      rtwprivate('ec_set_replacement_flag', 'extctrl_example20200707');
      load tlccmd.mat;
      savedpwd = pwd;
      cd ..;
      set_param(mdl,'MakeRTWSettingsObject', makertwObj);
      feval(tlccmd{:});
      set_param(mdl,'MakeRTWSettingsObject', []);
      rtwprivate rtwattic clean;
      cd(savedpwd);

   end
