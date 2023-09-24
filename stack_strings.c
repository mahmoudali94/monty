{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":"bf","path":"bf","contentType":"directory"},{"name":"errors.c","path":"errors.c","contentType":"file"},{"name":"file_tools.c","path":"file_tools.c","contentType":"file"},{"name":"main.c","path":"main.c","contentType":"file"},{"name":"monty.h","path":"monty.h","contentType":"file"},{"name":"stack_func1.c","path":"stack_func1.c","contentType":"file"},{"name":"stack_func2.c","path":"stack_func2.c","contentType":"file"},{"name":"stack_op.c","path":"stack_op.c","contentType":"file"},{"name":"stack_strings.c","path":"stack_strings.c","contentType":"file"}],"totalCount":9}},"fileTreeProcessingTime":1.8894879999999998,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":682627323,"defaultBranch":"main","name":"monty","ownerLogin":"sadatmisr","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-08-24T15:17:33.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/130691074?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1692890361.0","canEdit":false,"refType":"branch","currentOid":"b5394114697cb430a376e809eb1589246a6ace63"},"path":"stack_strings.c","currentUser":null,"blob":{"rawLines":["#include \"monty.h\"","","/**"," * print_char - Prints the Ascii value."," * @stack: Pointer to a pointer pointing to top node of the stack."," * @line_number: Interger representing the line number of of the opcode."," */","void print_char(stack_t **stack, unsigned int line_number)","{","\tint ascii;","","\tif (stack == NULL || *stack == NULL)","\t\tstring_err(11, line_number);","","\tascii = (*stack)->n;","\tif (ascii < 0 || ascii > 127)","\t\tstring_err(10, line_number);","\tprintf(\"%c\\n\", ascii);","}","","/**"," * print_str - Prints a string."," * @stack: Pointer to a pointer pointing to top node of the stack."," * @ln: Interger representing the line number of of the opcode."," */","void print_str(stack_t **stack, __attribute__((unused))unsigned int ln)","{","\tint ascii;","\tstack_t *tmp;","","\tif (stack == NULL || *stack == NULL)","\t{","\t\tprintf(\"\\n\");","\t\treturn;","\t}","","\ttmp = *stack;","\twhile (tmp != NULL)","\t{","\t\tascii = tmp->n;","\t\tif (ascii <= 0 || ascii > 127)","\t\t\tbreak;","\t\tprintf(\"%c\", ascii);","\t\ttmp = tmp->next;","\t}","\tprintf(\"\\n\");","}","","/**"," * rotl - Rotates the first node of the stack to the bottom."," * @stack: Pointer to a pointer pointing to top node of the stack."," * @ln: Interger representing the line number of of the opcode."," */","void rotl(stack_t **stack, __attribute__((unused))unsigned int ln)","{","\tstack_t *tmp;","","\tif (stack == NULL || *stack == NULL || (*stack)->next == NULL)","\t\treturn;","","\ttmp = *stack;","\twhile (tmp->next != NULL)","\t\ttmp = tmp->next;","","\ttmp->next = *stack;","\t(*stack)->prev = tmp;","\t*stack = (*stack)->next;","\t(*stack)->prev->next = NULL;","\t(*stack)->prev = NULL;","}","","","/**"," * rotr - Rotates the last node of the stack to the top."," * @stack: Pointer to a pointer pointing to top node of the stack."," * @ln: Interger representing the line number of of the opcode."," */","void rotr(stack_t **stack, __attribute__((unused))unsigned int ln)","{","\tstack_t *tmp;","","\tif (stack == NULL || *stack == NULL || (*stack)->next == NULL)","\t\treturn;","","\ttmp = *stack;","","\twhile (tmp->next != NULL)","\t\ttmp = tmp->next;","","\ttmp->next = *stack;","\ttmp->prev->next = NULL;","\ttmp->prev = NULL;","\t(*stack)->prev = tmp;","\t(*stack) = tmp;","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":39,"cssClass":"pl-c"}],[{"start":0,"end":66,"cssClass":"pl-c"}],[{"start":0,"end":72,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":15,"cssClass":"pl-en"},{"start":16,"end":23,"cssClass":"pl-smi"},{"start":24,"end":25,"cssClass":"pl-c1"},{"start":25,"end":26,"cssClass":"pl-c1"},{"start":26,"end":31,"cssClass":"pl-s1"},{"start":33,"end":45,"cssClass":"pl-smi"},{"start":42,"end":45,"cssClass":"pl-smi"},{"start":46,"end":57,"cssClass":"pl-s1"}],[],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":10,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-c1"},{"start":19,"end":21,"cssClass":"pl-c1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":23,"end":28,"cssClass":"pl-s1"},{"start":29,"end":31,"cssClass":"pl-c1"},{"start":32,"end":36,"cssClass":"pl-c1"}],[{"start":2,"end":12,"cssClass":"pl-en"},{"start":13,"end":15,"cssClass":"pl-c1"},{"start":17,"end":28,"cssClass":"pl-s1"}],[],[{"start":1,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":11,"end":16,"cssClass":"pl-s1"},{"start":17,"end":19,"cssClass":"pl-c1"},{"start":19,"end":20,"cssClass":"pl-c1"}],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":18,"end":23,"cssClass":"pl-s1"},{"start":24,"end":25,"cssClass":"pl-c1"},{"start":26,"end":29,"cssClass":"pl-c1"}],[{"start":2,"end":12,"cssClass":"pl-en"},{"start":13,"end":15,"cssClass":"pl-c1"},{"start":17,"end":28,"cssClass":"pl-s1"}],[{"start":1,"end":7,"cssClass":"pl-en"},{"start":8,"end":14,"cssClass":"pl-s"},{"start":16,"end":21,"cssClass":"pl-s1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":31,"cssClass":"pl-c"}],[{"start":0,"end":66,"cssClass":"pl-c"}],[{"start":0,"end":63,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":14,"cssClass":"pl-en"},{"start":15,"end":22,"cssClass":"pl-smi"},{"start":23,"end":24,"cssClass":"pl-c1"},{"start":24,"end":25,"cssClass":"pl-c1"},{"start":25,"end":30,"cssClass":"pl-s1"},{"start":47,"end":53,"cssClass":"pl-s1"},{"start":55,"end":67,"cssClass":"pl-smi"},{"start":64,"end":67,"cssClass":"pl-smi"},{"start":68,"end":70,"cssClass":"pl-s1"}],[],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":10,"cssClass":"pl-s1"}],[{"start":1,"end":8,"cssClass":"pl-smi"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":10,"end":13,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-c1"},{"start":19,"end":21,"cssClass":"pl-c1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":23,"end":28,"cssClass":"pl-s1"},{"start":29,"end":31,"cssClass":"pl-c1"},{"start":32,"end":36,"cssClass":"pl-c1"}],[],[{"start":2,"end":8,"cssClass":"pl-en"},{"start":9,"end":13,"cssClass":"pl-s"}],[{"start":2,"end":8,"cssClass":"pl-k"}],[],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":8,"end":13,"cssClass":"pl-s1"}],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":12,"end":14,"cssClass":"pl-c1"},{"start":15,"end":19,"cssClass":"pl-c1"}],[],[{"start":2,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":13,"cssClass":"pl-s1"},{"start":13,"end":15,"cssClass":"pl-c1"},{"start":15,"end":16,"cssClass":"pl-c1"}],[{"start":2,"end":4,"cssClass":"pl-k"},{"start":6,"end":11,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":19,"cssClass":"pl-c1"},{"start":20,"end":25,"cssClass":"pl-s1"},{"start":26,"end":27,"cssClass":"pl-c1"},{"start":28,"end":31,"cssClass":"pl-c1"}],[{"start":3,"end":8,"cssClass":"pl-k"}],[{"start":2,"end":8,"cssClass":"pl-en"},{"start":9,"end":13,"cssClass":"pl-s"},{"start":15,"end":20,"cssClass":"pl-s1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-c1"}],[],[{"start":1,"end":7,"cssClass":"pl-en"},{"start":8,"end":12,"cssClass":"pl-s"}],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":60,"cssClass":"pl-c"}],[{"start":0,"end":66,"cssClass":"pl-c"}],[{"start":0,"end":63,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":9,"cssClass":"pl-en"},{"start":10,"end":17,"cssClass":"pl-smi"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":19,"end":20,"cssClass":"pl-c1"},{"start":20,"end":25,"cssClass":"pl-s1"},{"start":42,"end":48,"cssClass":"pl-s1"},{"start":50,"end":62,"cssClass":"pl-smi"},{"start":59,"end":62,"cssClass":"pl-smi"},{"start":63,"end":65,"cssClass":"pl-s1"}],[],[{"start":1,"end":8,"cssClass":"pl-smi"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":10,"end":13,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-c1"},{"start":19,"end":21,"cssClass":"pl-c1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":23,"end":28,"cssClass":"pl-s1"},{"start":29,"end":31,"cssClass":"pl-c1"},{"start":32,"end":36,"cssClass":"pl-c1"},{"start":37,"end":39,"cssClass":"pl-c1"},{"start":41,"end":42,"cssClass":"pl-c1"},{"start":42,"end":47,"cssClass":"pl-s1"},{"start":48,"end":50,"cssClass":"pl-c1"},{"start":50,"end":54,"cssClass":"pl-c1"},{"start":55,"end":57,"cssClass":"pl-c1"},{"start":58,"end":62,"cssClass":"pl-c1"}],[{"start":2,"end":8,"cssClass":"pl-k"}],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":8,"end":13,"cssClass":"pl-s1"}],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-c1"},{"start":18,"end":20,"cssClass":"pl-c1"},{"start":21,"end":25,"cssClass":"pl-c1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-c1"}],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":4,"end":6,"cssClass":"pl-c1"},{"start":6,"end":10,"cssClass":"pl-c1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":19,"cssClass":"pl-s1"}],[{"start":2,"end":3,"cssClass":"pl-c1"},{"start":3,"end":8,"cssClass":"pl-s1"},{"start":9,"end":11,"cssClass":"pl-c1"},{"start":11,"end":15,"cssClass":"pl-c1"},{"start":16,"end":17,"cssClass":"pl-c1"},{"start":18,"end":21,"cssClass":"pl-s1"}],[{"start":1,"end":2,"cssClass":"pl-c1"},{"start":2,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":12,"end":17,"cssClass":"pl-s1"},{"start":18,"end":20,"cssClass":"pl-c1"},{"start":20,"end":24,"cssClass":"pl-c1"}],[{"start":2,"end":3,"cssClass":"pl-c1"},{"start":3,"end":8,"cssClass":"pl-s1"},{"start":9,"end":11,"cssClass":"pl-c1"},{"start":11,"end":15,"cssClass":"pl-c1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":17,"end":21,"cssClass":"pl-c1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":24,"end":28,"cssClass":"pl-c1"}],[{"start":2,"end":3,"cssClass":"pl-c1"},{"start":3,"end":8,"cssClass":"pl-s1"},{"start":9,"end":11,"cssClass":"pl-c1"},{"start":11,"end":15,"cssClass":"pl-c1"},{"start":16,"end":17,"cssClass":"pl-c1"},{"start":18,"end":22,"cssClass":"pl-c1"}],[],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":56,"cssClass":"pl-c"}],[{"start":0,"end":66,"cssClass":"pl-c"}],[{"start":0,"end":63,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":9,"cssClass":"pl-en"},{"start":10,"end":17,"cssClass":"pl-smi"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":19,"end":20,"cssClass":"pl-c1"},{"start":20,"end":25,"cssClass":"pl-s1"},{"start":42,"end":48,"cssClass":"pl-s1"},{"start":50,"end":62,"cssClass":"pl-smi"},{"start":59,"end":62,"cssClass":"pl-smi"},{"start":63,"end":65,"cssClass":"pl-s1"}],[],[{"start":1,"end":8,"cssClass":"pl-smi"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":10,"end":13,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-c1"},{"start":19,"end":21,"cssClass":"pl-c1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":23,"end":28,"cssClass":"pl-s1"},{"start":29,"end":31,"cssClass":"pl-c1"},{"start":32,"end":36,"cssClass":"pl-c1"},{"start":37,"end":39,"cssClass":"pl-c1"},{"start":41,"end":42,"cssClass":"pl-c1"},{"start":42,"end":47,"cssClass":"pl-s1"},{"start":48,"end":50,"cssClass":"pl-c1"},{"start":50,"end":54,"cssClass":"pl-c1"},{"start":55,"end":57,"cssClass":"pl-c1"},{"start":58,"end":62,"cssClass":"pl-c1"}],[{"start":2,"end":8,"cssClass":"pl-k"}],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":8,"end":13,"cssClass":"pl-s1"}],[],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-c1"},{"start":18,"end":20,"cssClass":"pl-c1"},{"start":21,"end":25,"cssClass":"pl-c1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-c1"}],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":4,"end":6,"cssClass":"pl-c1"},{"start":6,"end":10,"cssClass":"pl-c1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":19,"cssClass":"pl-s1"}],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":4,"end":6,"cssClass":"pl-c1"},{"start":6,"end":10,"cssClass":"pl-c1"},{"start":10,"end":12,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-c1"},{"start":17,"end":18,"cssClass":"pl-c1"},{"start":19,"end":23,"cssClass":"pl-c1"}],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":4,"end":6,"cssClass":"pl-c1"},{"start":6,"end":10,"cssClass":"pl-c1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-c1"}],[{"start":2,"end":3,"cssClass":"pl-c1"},{"start":3,"end":8,"cssClass":"pl-s1"},{"start":9,"end":11,"cssClass":"pl-c1"},{"start":11,"end":15,"cssClass":"pl-c1"},{"start":16,"end":17,"cssClass":"pl-c1"},{"start":18,"end":21,"cssClass":"pl-s1"}],[{"start":2,"end":3,"cssClass":"pl-c1"},{"start":3,"end":8,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":15,"cssClass":"pl-s1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/sadatmisr/monty/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/sadatmisr/monty/security/dependabot","repoSecurityAndAnalysisPath":"/sadatmisr/monty/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"stack_strings.c","displayUrl":"https://github.com/sadatmisr/monty/blob/main/stack_strings.c?raw=true","headerInfo":{"blobSize":"2 KB","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"479f2cc","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fsadatmisr%2Fmonty%2Fblob%2Fmain%2Fstack_strings.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"95","truncatedSloc":"79"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/sadatmisr/monty/discussions/new","newIssuePath":"/sadatmisr/monty/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/sadatmisr/monty/blob/main/stack_strings.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/sadatmisr/monty/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"sadatmisr","repoName":"monty","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"print_char","kind":"function","identStart":213,"identEnd":223,"extentStart":213,"extentEnd":266,"fullyQualifiedName":"print_char","identUtf16":{"start":{"lineNumber":7,"utf16Col":5},"end":{"lineNumber":7,"utf16Col":15}},"extentUtf16":{"start":{"lineNumber":7,"utf16Col":5},"end":{"lineNumber":7,"utf16Col":58}}},{"name":"print_str","kind":"function","identStart":639,"identEnd":648,"extentStart":639,"extentEnd":705,"fullyQualifiedName":"print_str","identUtf16":{"start":{"lineNumber":25,"utf16Col":5},"end":{"lineNumber":25,"utf16Col":14}},"extentUtf16":{"start":{"lineNumber":25,"utf16Col":5},"end":{"lineNumber":25,"utf16Col":71}}},{"name":"rotl","kind":"function","identStart":1175,"identEnd":1179,"extentStart":1175,"extentEnd":1236,"fullyQualifiedName":"rotl","identUtf16":{"start":{"lineNumber":53,"utf16Col":5},"end":{"lineNumber":53,"utf16Col":9}},"extentUtf16":{"start":{"lineNumber":53,"utf16Col":5},"end":{"lineNumber":53,"utf16Col":66}}},{"name":"rotr","kind":"function","identStart":1721,"identEnd":1725,"extentStart":1721,"extentEnd":1782,"fullyQualifiedName":"rotr","identUtf16":{"start":{"lineNumber":77,"utf16Col":5},"end":{"lineNumber":77,"utf16Col":9}},"extentUtf16":{"start":{"lineNumber":77,"utf16Col":5},"end":{"lineNumber":77,"utf16Col":66}}}]}},"copilotInfo":null,"csrf_tokens":{"/sadatmisr/monty/branches":{"post":"QfxIaGcG0FWwEO6kFnWUqmHBEATKwnpWTVAkEt7_YnL-m6E7trJDkjJ3wqAhreo__-DpdYA4vB8DnpFmmYP9nQ"},"/repos/preferences":{"post":"sMsgmnx9JhbrzZ4-DtLopz-iuyZvCRSraOasIAVE-spfOfgqK8_spBHg1YtjkCw3Cp1Ya8w4MKaonSUA79e9SQ"}}},"title":"monty/stack_strings.c at main · sadatmisr/monty"}